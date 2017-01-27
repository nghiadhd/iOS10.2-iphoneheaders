/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/UIPlugins/FMF.siriUIBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>

@class SAFmfGeoFence, MKMapView, UILabel, CNAvatarViewController, UIImageView, NSString;

@interface FMFAFGeoFenceTableViewCell : UITableViewCell <MKMapViewDelegate> {

	SAFmfGeoFence* aceFmfGeoFence;
	MKMapView* mapView;
	UILabel* nameLabel;
	UILabel* fenceLabel;
	CNAvatarViewController* friendAvatarView;
	UIImageView* geoFenceIconImageView;
	double zoomLevel;

}

@property (nonatomic,retain) UILabel * nameLabel; 
@property (nonatomic,retain) UILabel * fenceLabel; 
@property (nonatomic,retain) CNAvatarViewController * friendAvatarView; 
@property (nonatomic,retain) UIImageView * geoFenceIconImageView; 
@property (nonatomic,retain) SAFmfGeoFence * aceFmfGeoFence; 
@property (nonatomic,retain) MKMapView * mapView; 
@property (assign,nonatomic) double zoomLevel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)friendName;
-(UIImageView *)geoFenceIconImageView;
-(id)friendHandle;
-(id)friendPhone;
-(id)friendEmail;
-(UILabel *)fenceLabel;
-(void)setGeoFenceIconImageView:(UIImageView *)arg1 ;
-(void)updateMap;
-(void)setFriendAvatarView:(CNAvatarViewController *)arg1 ;
-(CNAvatarViewController *)friendAvatarView;
-(void)setFenceLabel:(UILabel *)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(void)setZoomLevel:(double)arg1 ;
-(SAFmfGeoFence *)aceFmfGeoFence;
-(void)setAceFmfGeoFence:(SAFmfGeoFence *)arg1 ;
-(double)zoomLevel;
-(void)setMapView:(MKMapView *)arg1 ;
-(MKMapView *)mapView;
@end

