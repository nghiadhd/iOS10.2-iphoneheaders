/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ETPointFIFO : NSObject {

	ETPointFIFO* _nextFIFO;

}

@property (nonatomic,retain) ETPointFIFO * nextFIFO;              //@synthesize nextFIFO=_nextFIFO - In the implementation block
-(void)flush;
-(void)clear;
-(id)initWithFIFO:(id)arg1 ;
-(void)setNextFIFO:(ETPointFIFO *)arg1 ;
-(ETPointFIFO *)nextFIFO;
-(void)addPoints:(1*)arg1 count:(unsigned long long)arg2 ;
-(void)emitPoints:(1*)arg1 count:(unsigned long long)arg2 ;
@end

