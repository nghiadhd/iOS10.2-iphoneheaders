/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSTransaction.h>

@class NSString;

@interface BSBlockTransaction : BSTransaction {

	/*^block*/id _block;
	NSString* _debugName;

}

@property (nonatomic,copy) NSString * debugName;              //@synthesize debugName=_debugName - In the implementation block
-(id)_descriptionProem;
-(void)dealloc;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)_begin;
-(void)setDebugName:(NSString *)arg1 ;
-(NSString *)debugName;
@end

