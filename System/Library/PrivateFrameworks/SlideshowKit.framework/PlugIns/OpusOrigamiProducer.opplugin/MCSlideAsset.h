/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class MCAssetVideo, NSString;

@interface MCSlideAsset : NSObject {

	MCAssetVideo* _asset;
	NSString* _kenBurnsType;
	CGPoint center;
	double scale;
	double rotation;

}

@property (retain) MCAssetVideo * asset;               //@synthesize asset=_asset - In the implementation block
@property (copy) NSString * kenBurnsType;              //@synthesize kenBurnsType=_kenBurnsType - In the implementation block
-(void)setKenBurnsType:(NSString *)arg1 ;
-(NSString *)kenBurnsType;
-(id)init;
-(void)dealloc;
-(id)description;
-(MCAssetVideo *)asset;
-(void)setAsset:(MCAssetVideo *)arg1 ;
@end

