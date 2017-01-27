/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SessionConnectionDelegate <NSObject,NSCopying>
@required
-(void)connection:(id)arg1 wasRedirected:(id)arg2 newRequest:(id)arg3 responseCallback:(/*^block*/id)arg4;
-(void)connection:(id)arg1 request:(id)arg2 needsNewBodyStreamCallback:(/*^block*/id)arg3;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 completion:(/*^block*/id)arg3;
-(void)connection:(id)arg1 willCacheResponse:(id)arg2 responseCallback:(/*^block*/id)arg3;
-(void)connection:(id)arg1 didFinishCollectingMetrics:(id)arg2 completion:(/*^block*/id)arg3;
-(void)connectionWillFinishLoading:(id)arg1;
-(void)connection:(id)arg1 didFinishLoadingWithError:(id)arg2;
-(void)connection:(id)arg1 didReceiveConnectionCacheKey:(HTTPConnectionCacheKey*)arg2;
-(void)connection:(id)arg1 challenged:(id)arg2 authCallback:(/*^block*/id)arg3;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 completion:(/*^block*/id)arg3;
-(void)connection:(id)arg1 sentBodyBytes:(id)arg2 totalBytes:(id)arg3 expectedBytes:(id)arg4;
-(void)connection:(id)arg1 _willSendRequestForEstablishedConnection:(id)arg2 completion:(/*^block*/id)arg3;
-(void)connection:(id)arg1 waitingWithReason:(long long)arg2;
-(void)connection:(id)arg1 _conditionalRequirementsChanged:(BOOL)arg2;
-(void)connection:(id)arg1 didReceiveSocketInputStream:(id)arg2 outputStream:(id)arg3;
-(void)connection:(id)arg1 needConnectedSocketToHost:(id)arg2 port:(unsigned long long)arg3 completion:(/*^block*/id)arg4;

@end

