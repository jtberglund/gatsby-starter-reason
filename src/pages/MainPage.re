let component = ReasonReact.statelessComponent("Main");

let text = ReasonReact.string;

let make = (~data: Layout.data, _children) => {
  ...component,
  render: _self =>
    <Layout>
      <h1> (text("Hi people")) </h1>
      <p> (text("Welcome to your new Gatsby site.")) </p>
      <p> (text("Now go build something great.")) </p>
      <GatsbyLink to_="/page-2/"> (text("Go to page 2")) </GatsbyLink>
    </Layout>,
};

let default =
  ReasonReact.wrapReasonForJs(~component, jsProps =>
    make(~data=jsProps##data, jsProps##children)
  );