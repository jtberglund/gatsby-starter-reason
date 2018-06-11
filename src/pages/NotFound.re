let component = ReasonReact.statelessComponent("404");

let text = ReasonReact.string;

let make = _children => {
  ...component,
  render: _self =>
    <div>
      <h1> (text("404 Not Found")) </h1>
      <p>
        (text("You just hit a route that doesn't exist... the sadness."))
      </p>
    </div>
};

let default =
  ReasonReact.wrapReasonForJs(~component, jsProps => make(jsProps##children));