//
//  ViewController.m
//  Test_TextView
//
//  Created by Vampire on 13-9-8.
//  Copyright (c) 2013年 yangyongxin. All rights reserved.
//

#import "ViewController.h"
#import "AppDelegate.h"
#import "SquareCamViewController1.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)changeView:(id)sender {
    SquareCamViewController1 *camere = [[SquareCamViewController1 alloc] initWithNibName:@"SquareCamViewController1" bundle:nil];
    AppDelegate *appDelegate = [[UIApplication sharedApplication] delegate];
    [appDelegate.nav pushViewController:camere animated:YES];
    
}

- (IBAction)changeView_Scan:(id)sender {
    
}
@end
