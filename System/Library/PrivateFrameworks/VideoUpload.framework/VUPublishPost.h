/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:18 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VideoUpload.framework/VideoUpload
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VUPublishPostDelegate;
@interface VUPublishPost : NSObject {

	id<VUPublishPostDelegate> _delegate;
	BOOL _allowsCellularAccessForUploads;

}

@property (assign,nonatomic) BOOL allowsCellularAccessForUploads;              //@synthesize allowsCellularAccessForUploads=_allowsCellularAccessForUploads - In the implementation block
-(id)initWithDelegate:(id)arg1 ;
-(void)startUpload;
-(void)setAllowsCellularAccessForUploads:(BOOL)arg1 ;
-(BOOL)allowsCellularAccessForUploads;
@end

