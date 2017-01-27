/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>

@class UIImage, NSString, NSLock, NSMutableArray, MKMapSnapshotRequest;

@interface MKMapSnapshotCreator : NSObject <MKMapViewDelegate> {

	UIImage* _lastSnapshot;
	NSString* _lastAttributionString;
	NSLock* _requestLock;
	NSMutableArray* _requests;
	MKMapSnapshotRequest* _servingRequest;

}

@property (nonatomic,retain) MKMapSnapshotRequest * servingRequest;              //@synthesize servingRequest=_servingRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsHighResolutionSnapshots;
+(BOOL)supportsSharingThumbnails;
-(id)init;
-(void)dealloc;
-(void)_processRequest;
-(id)_newSnapshotWithView:(id)arg1 ;
-(void)_respondWithSnapshot;
-(void)createSnapShotWithCoordinate:(CLLocationCoordinate2D)arg1 zoomLevel:(unsigned long long)arg2 size:(CGSize)arg3 requester:(id)arg4 context:(id)arg5 ;
-(id)recreateCurrentSnapshotWithRequester:(id)arg1 context:(id)arg2 ;
-(void)flushRequestQueue;
-(void)createSnapShotWithCoordinate:(CLLocationCoordinate2D)arg1 zoomLevel:(unsigned long long)arg2 size:(CGSize)arg3 handler:(/*^block*/id)arg4 ;
-(MKMapSnapshotRequest *)servingRequest;
-(void)setServingRequest:(MKMapSnapshotRequest *)arg1 ;
@end
