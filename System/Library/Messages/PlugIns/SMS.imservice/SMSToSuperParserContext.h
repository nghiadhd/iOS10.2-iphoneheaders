/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:36:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Messages/PlugIns/SMS.imservice/SMS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUtilities/IMHTMLToSuperParserContext.h>

@class NSMutableArray, SMSTextPart, NSArray;

@interface SMSToSuperParserContext : IMHTMLToSuperParserContext {

	NSMutableArray* _orderedParts;
	SMSTextPart* _currentTextPart;

}

@property (nonatomic,retain,readonly) NSArray * orderedParts;              //@synthesize orderedParts=_orderedParts - In the implementation block
-(void)dealloc;
-(id)name;
-(NSArray *)orderedParts;
-(void)_addPart:(id)arg1 ;
@end

