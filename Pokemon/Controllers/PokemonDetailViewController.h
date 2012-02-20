//
//  PokemonInfoViewController.h
//  Pokemon
//
//  Created by Kaijie Yu on 2/6/12.
//  Copyright (c) 2012 Kjuly. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PokemonDetailViewController : UIViewController
{
  NSDictionary * pokemonDataDict_;
}

@property (nonatomic, retain) NSDictionary * pokemonDataDict;

- (id)initWithPokemonDataDict:(NSDictionary *)pokemonDataDict;

@end
