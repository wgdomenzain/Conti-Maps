//
//  ViewController.h
//  Conti-Maps
//
//  Created by Walter Gonzalez Domenzain on 28/04/15.
//  Copyright (c) 2015 Smartplace. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MobileCoreServices/MobileCoreServices.h>
#import <CoreLocation/CoreLocation.h>
#import <GoogleMaps/GoogleMaps.h>

@interface ViewController : UIViewController <CLLocationManagerDelegate, GMSMapViewDelegate>

//Variables
@property (strong, nonatomic) CLLocationManager     *locationManager;
@property (strong, nonatomic) CLLocation            *location;

//Views
@property (strong, nonatomic) IBOutlet UIView *vMap;

//Actions
- (IBAction)btnRefreshMapPressed:(id)sender;

@end

