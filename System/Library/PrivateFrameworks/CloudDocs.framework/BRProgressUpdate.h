/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/CloudDocs-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BRFileObjectID, NSArray;

@interface BRProgressUpdate : NSObject <NSSecureCoding, NSCopying> {

	BRFileObjectID* _folderID;
	unsigned long long _uploadCompletedSize;
	unsigned long long _uploadTotalSize;
	unsigned long long _downloadCompletedSize;
	unsigned long long _downloadTotalSize;
	NSArray* _parentFileIDs;

}

@property (nonatomic,copy) BRFileObjectID * folderID;                               //@synthesize folderID=_folderID - In the implementation block
@property (assign,nonatomic) unsigned long long uploadCompletedSize;                //@synthesize uploadCompletedSize=_uploadCompletedSize - In the implementation block
@property (assign,nonatomic) unsigned long long uploadTotalSize;                    //@synthesize uploadTotalSize=_uploadTotalSize - In the implementation block
@property (assign,nonatomic) unsigned long long downloadCompletedSize;              //@synthesize downloadCompletedSize=_downloadCompletedSize - In the implementation block
@property (assign,nonatomic) unsigned long long downloadTotalSize;                  //@synthesize downloadTotalSize=_downloadTotalSize - In the implementation block
@property (nonatomic,copy) NSArray * parentFileIDs;                                 //@synthesize parentFileIDs=_parentFileIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFolderID:(BRFileObjectID *)arg1 ;
-(void)setParentFileIDs:(NSArray *)arg1 ;
-(unsigned long long)uploadCompletedSize;
-(void)setUploadCompletedSize:(unsigned long long)arg1 ;
-(unsigned long long)uploadTotalSize;
-(void)setUploadTotalSize:(unsigned long long)arg1 ;
-(unsigned long long)downloadCompletedSize;
-(void)setDownloadCompletedSize:(unsigned long long)arg1 ;
-(unsigned long long)downloadTotalSize;
-(void)setDownloadTotalSize:(unsigned long long)arg1 ;
-(BRFileObjectID *)folderID;
-(NSArray *)parentFileIDs;
@end

