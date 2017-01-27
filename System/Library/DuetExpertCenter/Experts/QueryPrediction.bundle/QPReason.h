/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/DuetExpertCenter/Experts/QueryPrediction.bundle/QueryPrediction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QueryPrediction/QueryPrediction-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface QPReason : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _reason;

}
+(id)shortAggdCodesForReasons:(id)arg1 ;
+(id)stringsForReasons:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)asString;
-(id)asShortAggdCode;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithValue:(unsigned long long)arg1 ;
-(unsigned long long)rawValue;
@end

