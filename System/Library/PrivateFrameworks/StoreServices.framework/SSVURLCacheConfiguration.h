/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:34:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SSVURLCacheConfiguration : NSObject {

	BOOL _supportsProcessSharing;
	NSString* _sessionIdentifier;

}

@property (nonatomic,copy) NSString * sessionIdentifier;               //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL supportsProcessSharing;              //@synthesize supportsProcessSharing=_supportsProcessSharing - In the implementation block
-(BOOL)supportsProcessSharing;
-(void)setSupportsProcessSharing:(BOOL)arg1 ;
-(NSString *)sessionIdentifier;
-(void)setSessionIdentifier:(NSString *)arg1 ;
@end
