/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface BLTBulletinSendQueueAttachmentInfo : NSObject {

	NSURL* _url;
	NSString* _key;

}

@property (nonatomic,retain) NSURL * url;               //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * key;              //@synthesize key=_key - In the implementation block
-(NSString *)key;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setKey:(NSString *)arg1 ;
@end

