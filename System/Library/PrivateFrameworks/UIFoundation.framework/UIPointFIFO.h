/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface UIPointFIFO : NSObject {

	UIPointFIFO* _nextFIFO;

}

@property (nonatomic,retain) UIPointFIFO * nextFIFO;              //@synthesize nextFIFO=_nextFIFO - In the implementation block
-(void)dealloc;
-(void)flush;
-(void)addPoint:;
-(void)clear;
-(id)initWithFIFO:(id)arg1 ;
-(void)setNextFIFO:(UIPointFIFO *)arg1 ;
-(UIPointFIFO *)nextFIFO;
-(void)emitPoint:;
@end

