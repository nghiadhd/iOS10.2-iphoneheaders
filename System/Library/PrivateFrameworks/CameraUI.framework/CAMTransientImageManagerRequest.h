/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:03 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CAMTransientImageManagerRequest : NSObject {

	BOOL _isCanceled;
	BOOL _isFinished;
	NSString* _uuid;
	/*^block*/id _resultHandler;

}

@property (nonatomic,copy) NSString * uuid;                //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) id resultHandler;               //@synthesize resultHandler=_resultHandler - In the implementation block
@property (assign,nonatomic) BOOL isCanceled;              //@synthesize isCanceled=_isCanceled - In the implementation block
@property (assign,nonatomic) BOOL isFinished;              //@synthesize isFinished=_isFinished - In the implementation block
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(BOOL)isFinished;
-(void)setResultHandler:(id)arg1 ;
-(BOOL)isCanceled;
-(id)resultHandler;
-(void)setIsCanceled:(BOOL)arg1 ;
-(void)setIsFinished:(BOOL)arg1 ;
@end

