/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SBInfoOperation : NSObject {

	id _operand;
	NSString* _label;

}

@property (nonatomic,readonly) id operand;              //@synthesize operand=_operand - In the implementation block
+(id)operationWithOperand:(id)arg1 label:(id)arg2 ;
-(id)initWithOperand:(id)arg1 label:(id)arg2 ;
-(id)operand;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

