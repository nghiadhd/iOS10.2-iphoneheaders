/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBSystemServiceFacility;

@interface _FBSystemServiceServerPendingConnection : NSObject {

	FBSystemServiceFacility* _facility;
	/*^block*/id _completion;

}

@property (nonatomic,retain) FBSystemServiceFacility * facility;              //@synthesize facility=_facility - In the implementation block
@property (nonatomic,copy) id completion;                                     //@synthesize completion=_completion - In the implementation block
+(id)pendingConnectionToFacility:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(id)initWithFacility:(id)arg1 completion:(/*^block*/id)arg2 ;
-(FBSystemServiceFacility *)facility;
-(void)setFacility:(FBSystemServiceFacility *)arg1 ;
@end

