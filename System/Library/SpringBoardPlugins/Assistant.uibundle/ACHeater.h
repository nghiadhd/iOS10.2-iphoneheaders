/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/SpringBoardPlugins/Assistant.uibundle/Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACHeaterDelegate;
@interface ACHeater : NSObject {

	id<ACHeaterDelegate> _delegate;
	double _preparationStartTime;

}

@property (assign,setter=_setPreparationStartTime:,getter=_preparationStartTime,nonatomic) double preparationStartTime;              //@synthesize preparationStartTime=_preparationStartTime - In the implementation block
@property (assign,nonatomic,__weak) id<ACHeaterDelegate> delegate;                                                                   //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<ACHeaterDelegate>)arg1 ;
-(id<ACHeaterDelegate>)delegate;
-(void)_setPreparationStartTime:(double)arg1 ;
-(void)_cancelPreparation;
-(void)_suggestPreheat;
-(void)_suggestDefrost;
-(double)_preparationStartTime;
-(void)prepareForUseAfterTimeInterval:(double)arg1 ;
-(void)cancelPreparation;
@end

