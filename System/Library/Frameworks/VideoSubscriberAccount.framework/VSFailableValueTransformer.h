/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSValueTransformer.h>

@class NSValueTransformer;

@interface VSFailableValueTransformer : NSValueTransformer {

	NSValueTransformer* _objectValueTransformer;

}

@property (nonatomic,retain) NSValueTransformer * objectValueTransformer;              //@synthesize objectValueTransformer=_objectValueTransformer - In the implementation block
+(Class)transformedValueClass;
+(BOOL)allowsReverseTransformation;
-(id)transformedValue:(id)arg1 ;
-(void)setObjectValueTransformer:(NSValueTransformer *)arg1 ;
-(NSValueTransformer *)objectValueTransformer;
@end

