/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface TUMetadataItem : NSObject {

	NSMutableDictionary* _callMetadata;

}

@property (nonatomic,retain) NSMutableDictionary * callMetadata;              //@synthesize callMetadata=_callMetadata - In the implementation block
-(id)init;
-(id)description;
-(BOOL)isEmpty;
-(id)metadataForProvider:(Class)arg1 ;
-(void)setMetadata:(id)arg1 forProvider:(Class)arg2 ;
-(void)setCallMetadata:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)callMetadata;
@end

