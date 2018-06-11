let component = ReasonReact.statelessComponent("index");

let text = ReasonReact.string;

let make = _children => {
  ...component,
  render: _self =>
    <div>
      <h1> (text("Hi people")) </h1>
      <p> (text("Welcome to your new Gatsby site.")) </p>
      <p> (text("Now go build something great.")) </p>
      <GatsbyLink to_="/page-2/"> (text("Go to page 2")) </GatsbyLink>
    </div>
};

let default =
  ReasonReact.wrapReasonForJs(~component, jsProps => make(jsProps##children));