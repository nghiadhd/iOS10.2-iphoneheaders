/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/ICRequest.h>

@interface ICCreateGeniusContainerRequest : ICRequest
+(id)requestWithDatabaseID:(unsigned)arg1 playlistName:(id)arg2 seedItemIDs:(id)arg3 itemIDs:(id)arg4 ;
-(id)_bodyDataForPlaylistName:(id)arg1 seedItemIDs:(id)arg2 itemIDs:(id)arg3 ;
-(id)initWithDatabaseID:(unsigned)arg1 playlistName:(id)arg2 seedItemIDs:(id)arg3 itemIDs:(id)arg4 ;
-(id)canonicalResponseForResponse:(id)arg1 ;
@end

