/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libcoreroutine.dylib/RTPredictionItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID;

@interface RTPredictionItemRoom : RTPredictionItem <NSCopying> {

	NSUUID* _roomIdentifier;

}

@property (nonatomic,readonly) NSUUID * roomIdentifier;              //@synthesize roomIdentifier=_roomIdentifier - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSUUID *)roomIdentifier;
-(id)initWithConfidence:(double)arg1 roomIdentifier:(id)arg2 ;
@end

