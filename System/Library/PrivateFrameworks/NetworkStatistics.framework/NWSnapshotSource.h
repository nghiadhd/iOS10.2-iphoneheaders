/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NetworkStatistics/NetworkStatistics-Structs.h>
@interface NWSnapshotSource : NSObject {

	int _sockFd;

}
+(id)routeSnapshotForIPv4Host:(sockaddr_in*)arg1 viaInterfaceIndex:(int)arg2 ;
+(id)routeSnapshotForIPv6Host:(sockaddr_in6*)arg1 viaInterfaceIndex:(int)arg2 ;
-(id)init;
-(void)dealloc;
-(long long)send:(void*)arg1 length:(unsigned long long)arg2 err:(int*)arg3 ;
-(long long)recv:(void*)arg1 length:(unsigned long long)arg2 err:(int*)arg3 ;
@end

