/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSParsecModel.h>

@class NSString, NSURL;

@interface WBSParsecPunchout : WBSParsecModel {

	NSString* _name;
	NSString* _bundleID;
	NSString* _punchoutLabel;
	NSURL* _punchoutURL;
	NSURL* _installURL;

}

@property (nonatomic,copy,readonly) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleID;                   //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * punchoutLabel;              //@synthesize punchoutLabel=_punchoutLabel - In the implementation block
@property (nonatomic,readonly) NSURL * punchoutURL;                        //@synthesize punchoutURL=_punchoutURL - In the implementation block
@property (nonatomic,readonly) NSURL * installURL;                         //@synthesize installURL=_installURL - In the implementation block
+(id)schema;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(NSURL *)punchoutURL;
-(NSString *)punchoutLabel;
-(NSURL *)installURL;
-(NSString *)bundleID;
@end

