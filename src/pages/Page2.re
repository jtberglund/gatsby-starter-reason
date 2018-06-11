let component = ReasonReact.statelessComponent("page-2");

let text = ReasonReact.string;

let make = _children => {
  ...component,
  render: _self =>
    <div>
      <h1> (text("Hi from the second page")) </h1>
      <p> (text("Welcome to page 2")) </p>
      <GatsbyLink to_="/"> (text("Go back to the homepage")) </GatsbyLink>
    </div>
};

let default =
  ReasonReact.wrapReasonForJs(~component, jsProps => make(jsProps##children));