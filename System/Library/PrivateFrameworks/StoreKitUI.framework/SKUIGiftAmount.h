/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface SKUIGiftAmount : NSObject <NSCopying> {

	NSString* _displayLabel;
	NSString* _partNumber;
	NSNumber* _value;

}

@property (nonatomic,copy) NSString * displayLabel;              //@synthesize displayLabel=_displayLabel - In the implementation block
@property (nonatomic,copy) NSString * partNumber;                //@synthesize partNumber=_partNumber - In the implementation block
@property (nonatomic,copy) NSNumber * value;                     //@synthesize value=_value - In the implementation block
-(NSNumber *)value;
-(void)setValue:(NSNumber *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)HTTPBodyDictionary;
-(NSString *)displayLabel;
-(id)initWithAmountDictionary:(id)arg1 ;
-(void)setDisplayLabel:(NSString *)arg1 ;
-(NSString *)partNumber;
-(void)setPartNumber:(NSString *)arg1 ;
@end

