/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:58 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Library/Application Support/AdSheet/MapWebKitPlugin.webplugin/MapWebKitPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapWebKitPlugin/MapWebKitPlugin-Structs.h>
#import <MapKit/MKCircle.h>
#import <MapWebKitPlugin/MapPluginOverlay.h>

@class NSString, MKOverlayPathView, MapPluginOverlayPathOptions;

@interface MapPluginCircleOverlay : MKCircle <MapPluginOverlay> {

	NSString* _identifier;
	MapPluginOverlayPathOptions* _pathOptions;

}

@property (nonatomic,retain) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) MapPluginOverlayPathOptions * pathOptions;              //@synthesize pathOptions=_pathOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,readonly) SCD_Struct_Ma1 boundingMapRect; 
@property (nonatomic,retain,readonly) MKOverlayPathView * overlayView; 
+(id)circleOverlayForWebScriptObject:(id)arg1 ;
-(void)setPathOptions:(MapPluginOverlayPathOptions *)arg1 ;
-(MapPluginOverlayPathOptions *)pathOptions;
-(void)dealloc;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(MKOverlayPathView *)overlayView;
@end

