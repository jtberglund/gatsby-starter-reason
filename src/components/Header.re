let component = ReasonReact.statelessComponent("Header");

let make = (~siteTitle: string, _children) => {
  ...component,
  render: _self =>
    <div
      style=(
        ReactDOMRe.Style.make(
          ~background="rebeccapurple",
          ~marginBottom="1.45rem",
          ()
        )
      )>
      <div
        style=(
          ReactDOMRe.Style.make(
            ~margin="0 auto",
            ~maxWidth="960px",
            ~padding="1.45rem 1.0875rem",
            ()
          )
        )>
        <h1 style=(ReactDOMRe.Style.make(~margin="0", ()))>
          <GatsbyLink
            to_="/"
            style=(
              ReactDOMRe.Style.make(~color="white", ~textDecoration="none", ())
            )>
            (ReasonReact.string(siteTitle))
          </GatsbyLink>
        </h1>
      </div>
    </div>
};