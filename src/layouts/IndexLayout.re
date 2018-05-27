let component = ReasonReact.statelessComponent("IndexLayout");

type data = {. "site": {. "siteMetadata": {. "title": string}}};

[@bs.deriving abstract]
type metaField = {
  name: string,
  content: string
};

let meta = [|
  metaField(~name="description", ~content="Sample"),
  metaField(~name="keywords", ~content="sample, something")
|];

let make = (data: data, children) => {
  ...component,
  render: _self =>
    <div>
      <Helmet title=data##site##siteMetadata##title meta />
      <Header siteTitle=data##site##siteMetadata##title />
      <div
        style=(
          ReactDOMRe.Style.make(
            ~margin="0 auto",
            ~maxWidth="960px",
            ~padding="0px 1.0875rem 1.45rem",
            ~paddingTop="0",
            ()
          )
        )>
        (children())
      </div>
    </div>
};

let default =
  ReasonReact.wrapReasonForJs(~component, jsProps =>
    make(jsProps##data, jsProps##children)
  );