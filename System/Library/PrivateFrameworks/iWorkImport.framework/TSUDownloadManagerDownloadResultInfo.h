/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface TSUDownloadManagerDownloadResultInfo : NSObject {

	BOOL _success;
	NSError* _error;

}

@property (readonly) BOOL success;                 //@synthesize success=_success - In the implementation block
@property (readonly) NSError * error;              //@synthesize error=_error - In the implementation block
-(id)initWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(id)init;
-(NSError *)error;
-(BOOL)success;
@end

