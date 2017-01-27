/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class RadioArtworkCollection, RadioStation, NSString, NSDictionary;

@interface MPCRadioStationPlaybackMetadata : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	RadioArtworkCollection* _artworkCollection;
	BOOL _hasSetArtworkCollection;
	BOOL _hasSetStationHash;
	BOOL _hasSetStationID;
	BOOL _hasSetStationName;
	BOOL _hasSetStationStringID;
	BOOL _hasValidRadioStation;
	RadioStation* _station;
	NSString* _stationHash;
	long long _stationID;
	NSString* _stationName;
	NSString* _stationStringID;

}

@property (nonatomic,readonly) RadioArtworkCollection * artworkCollection; 
@property (nonatomic,readonly) RadioStation * station;                                  //@synthesize station=_station - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * stationDictionary; 
@property (nonatomic,copy,readonly) NSString * stationName; 
@property (nonatomic,copy,readonly) NSString * stationHash; 
@property (nonatomic,readonly) long long stationID; 
@property (nonatomic,copy,readonly) NSString * stationStringID; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)_copyWithZone:(NSZone*)arg1 class:(Class)arg2 ;
-(long long)stationID;
-(NSString *)stationStringID;
-(id)_station;
-(id)initWithStation:(id)arg1 ;
-(NSString *)stationHash;
-(RadioArtworkCollection *)artworkCollection;
-(RadioStation *)station;
-(id)initWithStationStringID:(id)arg1 ;
-(NSString *)stationName;
-(NSDictionary *)stationDictionary;
-(BOOL)isEffectivelyEqualStationWithPlaybackMetadata:(id)arg1 ;
@end

