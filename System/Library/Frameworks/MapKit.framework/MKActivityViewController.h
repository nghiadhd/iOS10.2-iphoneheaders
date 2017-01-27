/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivityViewController.h>
#import <UIKit/UIActivityViewControllerDelegate.h>

@protocol MKActivityViewControllerDelegate;
@class MKMapItem, NSString;

@interface MKActivityViewController : UIActivityViewController <UIActivityViewControllerDelegate> {

	MKMapItem* _mapItem;
	id<MKActivityViewControllerDelegate> _activityControllerDelegate;

}

@property (assign,nonatomic,__weak) id<MKActivityViewControllerDelegate> activityControllerDelegate;              //@synthesize activityControllerDelegate=_activityControllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(/*^block*/id)_completionHandler;
-(id)initWithShareItem:(id)arg1 ;
-(id)initWithMapItem:(id)arg1 contact:(id)arg2 applicationActivities:(id)arg3 ;
-(id)initWithMapItem:(id)arg1 contact:(id)arg2 applicationActivities:(id)arg3 activityProviderDelegate:(id)arg4 ;
-(id)initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned long long)arg3 applicationActivities:(id)arg4 ;
-(id)initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned long long)arg3 applicationActivities:(id)arg4 routeProviderDelegate:(id)arg5 ;
-(/*^block*/id)_activityHandler;
-(id<MKActivityViewControllerDelegate>)activityControllerDelegate;
-(void)setActivityControllerDelegate:(id<MKActivityViewControllerDelegate>)arg1 ;
@end

