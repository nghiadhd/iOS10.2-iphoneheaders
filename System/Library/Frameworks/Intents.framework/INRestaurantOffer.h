/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:58 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INRestaurantOfferExport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface INRestaurantOffer : NSObject <INRestaurantOfferExport, NSSecureCoding, NSCopying> {

	NSString* _offerTitleText;
	NSString* _offerDetailText;
	NSString* _offerIdentifier;

}

@property (nonatomic,copy) NSString * offerTitleText;               //@synthesize offerTitleText=_offerTitleText - In the implementation block
@property (nonatomic,copy) NSString * offerDetailText;              //@synthesize offerDetailText=_offerDetailText - In the implementation block
@property (nonatomic,copy) NSString * offerIdentifier;              //@synthesize offerIdentifier=_offerIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setOfferIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_dictionaryRepresentation;
-(NSString *)offerIdentifier;
-(NSString *)offerTitleText;
-(void)setOfferTitleText:(NSString *)arg1 ;
-(NSString *)offerDetailText;
-(void)setOfferDetailText:(NSString *)arg1 ;
@end

