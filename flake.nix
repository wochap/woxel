{
  inputs.nixpkgs.url =
    "github:nixos/nixpkgs?rev=b75693fb46bfaf09e662d09ec076c5a162efa9f6"; # nixos-24.11 (20 mar 2025)
  inputs.systems.url = "github:nix-systems/default";
  inputs.flake-utils = {
    url = "github:numtide/flake-utils";
    inputs.systems.follows = "systems";
  };

  outputs = { nixpkgs, flake-utils, ... }:
    flake-utils.lib.eachDefaultSystem (system:
      let pkgs = nixpkgs.legacyPackages.${system};
      in {
        devShells.default = pkgs.mkShell {
          packages = [
            # qt6 development tools
            pkgs.qt6.full
            pkgs.qtcreator
          ];
        };
      });
}
