//
//  hitMeDetailViewController.h
//  hitMe
//
//  Created by Pinak Shikhare on 9/6/14.
//  Copyright (c) 2014 Pinak Shikhare. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface hitMeDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
