/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ServerDocsProtocol/SDFActivityInfo.h>

@class NSData;

@interface DCActivityInfo : SDFActivityInfo {

	NSData* _sharepointDocumentIdentifier;

}

@property (retain,readonly) NSData * sharepointDocumentIdentifier;              //@synthesize sharepointDocumentIdentifier=_sharepointDocumentIdentifier - In the implementation block
+(id)activityInfoWithQueue:(id)arg1 ;
+(id)activityInfoWithQueue:(id)arg1 sharepointDocumentIdentifier:(id)arg2 ;
-(id)description;
-(id)initWithQueue:(id)arg1 sharepointDocumentIdentifier:(id)arg2 ;
-(NSData *)sharepointDocumentIdentifier;
@end

