/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString, NSURL;

@interface _MFMailComposeAttachmentWrapper : NSObject {

	NSData* _data;
	NSString* _mimeType;
	NSString* _fileName;
	NSURL* _fileURL;
	NSString* _identifier;

}

@property (nonatomic,readonly) NSData * data;                      //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSString * mimeType;                //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,readonly) NSString * fileName;                //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,readonly) NSURL * fileURL;                    //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(id)wrapperWithFileURL:(id)arg1 mimeType:(id)arg2 ;
+(id)wrapperWithData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 ;
-(void)dealloc;
-(id)description;
-(NSString *)identifier;
-(NSData *)data;
-(NSString *)mimeType;
-(NSURL *)fileURL;
-(unsigned long long)fileSize;
-(id)initWithFileURL:(id)arg1 mimeType:(id)arg2 ;
-(id)initWithData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 ;
-(NSString *)fileName;
@end

