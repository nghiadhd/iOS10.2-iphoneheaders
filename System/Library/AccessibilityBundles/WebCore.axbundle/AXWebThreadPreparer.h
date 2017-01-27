/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:36:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/AccessibilityBundles/WebCore.axbundle/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AXWebThreadPreparer : NSObject {

	BOOL _preparedThisRunLoop;
	BOOL _preparedAnswer;

}

@property (assign,nonatomic) BOOL preparedThisRunLoop;              //@synthesize preparedThisRunLoop=_preparedThisRunLoop - In the implementation block
@property (assign,nonatomic) BOOL preparedAnswer;                   //@synthesize preparedAnswer=_preparedAnswer - In the implementation block
+(id)sharedPreparer;
-(id)init;
-(BOOL)preparedThisRunLoop;
-(void)setPreparedThisRunLoop:(BOOL)arg1 ;
-(BOOL)preparedAnswer;
-(void)setPreparedAnswer:(BOOL)arg1 ;
@end

