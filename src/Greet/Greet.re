let component = ReasonReact.statelessComponent("Greet");

let make = (~title, _children) => {
  ...component,
  render: _self => <div> {ReasonReact.string("Hello " ++ title)} </div>,
};