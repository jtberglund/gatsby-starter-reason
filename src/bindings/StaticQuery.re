[@bs.module "gatsby"]
external staticQuery : ReasonReact.reactClass = "StaticQuery";

[@bs.module "gatsby"] external graphqljs : 'a => 'b = "graphql";

let graphql = (query: string) => [%bs.raw
  {|
    (function() {
      function splitQuery(str) {

      }
      var templateArgs = splitQuery(query);
      console.log(templateArgs);
      Gatsy.graphql.apply([templateArgs[0]].concat(templateArgs.slice(1)))
    })()
   |}
];

let make = (~query: 'a, ~render: 'a => ReasonReact.reactElement, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=staticQuery,
    ~props={"query": query, "render": render},
    children,
  );