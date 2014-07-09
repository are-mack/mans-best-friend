//
//  MBFViewController.h
//  Man's Best Friend
//
//  Created by McCawley on 6/17/14.
//  Copyright (c) 2014 Ryan McCawley. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MBFViewController : UIViewController

-(void)printHelloWorld;
- (IBAction)newDogBarButtonItemPressed:(UIBarButtonItem *)sender;

@property (strong, nonatomic) IBOutlet UIImageView *myImageView;
@property (strong, nonatomic) IBOutlet UILabel *nameLabel;
@property (strong, nonatomic) IBOutlet UILabel *breedLabel;
@property (strong, nonatomic) NSMutableArray *myDogs;
@property (nonatomic) int currentIndex;

@end
