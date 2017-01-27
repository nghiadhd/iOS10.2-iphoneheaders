/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCRemoteVideoManagerDelegate <NSObject>
@optional
-(void)remoteVideoServerDidDie;

@required
-(void)releaseQueueForStreamToken:(long long)arg1;
-(void)remoteVideoDidDegrade:(BOOL)arg1 streamToken:(long long)arg2;
-(void)connectionDidChangeWithLocalInterfaceType:(id)arg1 remoteInterfaceType:(id)arg2 streamToken:(long long)arg3;
-(void)remoteMediaDidStall:(BOOL)arg1 streamToken:(long long)arg2;
-(void)remoteScreenAttributesDidChange:(id)arg1 streamToken:(long long)arg2;
-(void)remoteVideoAttributesDidChange:(id)arg1 streamToken:(long long)arg2;
-(void)didReceiveFirstRemoteFrameForStreamToken:(long long)arg1;
-(void)remoteVideoDidPause:(BOOL)arg1 streamToken:(long long)arg2;

@end

