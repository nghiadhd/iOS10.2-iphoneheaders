/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <MediaRemote/MRProtocolMessage.h>

@interface MRGetPlaybackQueueMessage : MRProtocolMessage {

	SCD_Struct_MR21 _range;

}

@property (nonatomic,readonly) SCD_Struct_MR25 request; 
-(void)dealloc;
-(SCD_Struct_MR25)request;
-(unsigned long long)type;
-(id)initWithRequest:(SCD_Struct_MR25)arg1 ;
@end

