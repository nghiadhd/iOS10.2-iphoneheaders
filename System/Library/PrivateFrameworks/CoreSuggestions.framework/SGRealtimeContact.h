/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SGContact, NSString;

@interface SGRealtimeContact : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isHarvested;
	int _state;
	int _abPersonId;
	SGContact* _contact;
	NSString* _cnContactIdentifier;
	unsigned long long _extractionType;

}

@property (nonatomic,readonly) int state;                                      //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) SGContact * contact;                            //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) int abPersonId;                                 //@synthesize abPersonId=_abPersonId - In the implementation block
@property (nonatomic,readonly) NSString * cnContactIdentifier;                 //@synthesize cnContactIdentifier=_cnContactIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long extractionType;              //@synthesize extractionType=_extractionType - In the implementation block
@property (nonatomic,readonly) BOOL isHarvested;                               //@synthesize isHarvested=_isHarvested - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)realtimeContactForFields:(id)arg1 addedToCuratedContact:(int)arg2 ;
+(id)realtimeContactForNewContact:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SGContact *)contact;
-(id)initWithState:(int)arg1 contact:(id)arg2 abPersonId:(int)arg3 ;
-(BOOL)isEqualToRealtimeContact:(id)arg1 ;
-(void)setExtractionType;
-(NSString *)cnContactIdentifier;
-(id)markedAsHarvested;
-(void)setCnContactIdentifier:(NSString *)arg1 ;
-(int)abPersonId;
-(unsigned long long)extractionType;
-(BOOL)isHarvested;
@end

