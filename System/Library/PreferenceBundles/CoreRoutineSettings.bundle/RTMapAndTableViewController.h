/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/CoreRoutineSettings.bundle/CoreRoutineSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class MKMapView, UITableView, NSArray, NSString;

@interface RTMapAndTableViewController : UIViewController <MKMapViewDelegate, UITableViewDelegate, UITableViewDataSource> {

	MKMapView* _mapView;
	UITableView* _tableView;
	double _annotationSpanInScreenPoints;
	NSArray* _tableRowItems;

}

@property (nonatomic,retain) MKMapView * mapView;                                //@synthesize mapView=_mapView - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                            //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) double annotationSpanInScreenPoints;              //@synthesize annotationSpanInScreenPoints=_annotationSpanInScreenPoints - In the implementation block
@property (nonatomic,copy) NSArray * tableRowItems;                              //@synthesize tableRowItems=_tableRowItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTableRowItems:(NSArray *)arg1 ;
-(double)annotationSpanInScreenPoints;
-(NSArray *)tableRowItems;
-(void)selectRowItem:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(id)fillColor;
-(id)strokeColor;
-(void)setMapView:(MKMapView *)arg1 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(id)mapView:(id)arg1 rendererForOverlay:(id)arg2 ;
-(MKMapView *)mapView;
@end

