[%bs.raw {|require('./Layout.css')|}];

let component = ReasonReact.statelessComponent("Layout");

type data = {. "site": {. "siteMetadata": {. "title": string}}};

let meta = [|
  Helmet.metaField(~name="description", ~content="Sample"),
  Helmet.metaField(~name="keywords", ~content="sample, something"),
|];

/* let make = (~data: data, children) => {
     ...component,
     render: _self =>
       <>
         <Helmet title=data##site##siteMetadata##title meta>
           <html lang="en" />
         </Helmet>
         <Header siteTitle=data##site##siteMetadata##title />
         <div
           style=(
             ReactDOMRe.Style.make(
               ~margin="0 auto",
               ~maxWidth="960px",
               ~padding="0px 1.0875rem 1.45rem",
               ~paddingTop="0",
               (),
             )
           )>
           ...children
         </div>
       </>,
   }; */

let make = children => {
  ...component,
  render: _self =>
    <StaticQuery
      query=(
        StaticQuery.graphql(
          "
      query SiteTitleQuery {
        site {
          siteMetadata {
            title
          }
        }
      }",
        )
      )
      render=(
        (data: data) =>
          <>
            <Helmet title=data##site##siteMetadata##title meta>
              <html lang="en" />
            </Helmet>
            <Header siteTitle=data##site##siteMetadata##title />
            <div
              style=(
                ReactDOMRe.Style.make(
                  ~margin="0 auto",
                  ~maxWidth="960px",
                  ~padding="0px 1.0875rem 1.45rem",
                  ~paddingTop="0",
                  (),
                )
              )>
              ...children
            </div>
          </>
      )
    />,
};