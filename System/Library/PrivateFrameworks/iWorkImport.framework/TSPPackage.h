/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, TSPFileCoordinatorDelegate;
#import <iWorkImport/iWorkImport-Structs.h>
@class NSObject, TSPDocumentProperties, TSUZipFileArchive, NSError, NSHashTable, SFUCryptoKey, NSString, NSData;

@interface TSPPackage : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	TSPDocumentProperties* _documentProperties;
	TSUZipFileArchive* _zipArchive;
	NSError* _lastReloadError;
	NSHashTable* _packageDatas;
	id<TSPFileCoordinatorDelegate> _fileCoordinatorDelegate;
	struct {
		unsigned isLazyLoadingDocumentProperties : 1;
		unsigned isLazyLoadingZip : 1;
	}  _flags;
	unsigned char _packageIdentifier;
	BOOL _isClosed;
	SFUCryptoKey* _decryptionKey;
	unsigned long long _fileFormatVersion;

}

@property (nonatomic,readonly) long long packageType; 
@property (nonatomic,readonly) unsigned char packageIdentifier;                                            //@synthesize packageIdentifier=_packageIdentifier - In the implementation block
@property (nonatomic,__weak,readonly) id<TSPFileCoordinatorDelegate> fileCoordinatorDelegate;              //@synthesize fileCoordinatorDelegate=_fileCoordinatorDelegate - In the implementation block
@property (nonatomic,readonly) TSPDocumentProperties * documentProperties; 
@property (nonatomic,readonly) SFUCryptoKey * decryptionKey;                                               //@synthesize decryptionKey=_decryptionKey - In the implementation block
@property (nonatomic,readonly) BOOL isClosed;                                                              //@synthesize isClosed=_isClosed - In the implementation block
@property (nonatomic,readonly) unsigned long long fileFormatVersion;                                       //@synthesize fileFormatVersion=_fileFormatVersion - In the implementation block
@property (retain) TSUZipFileArchive * zipArchive; 
@property (readonly) NSError * lastReloadError; 
@property (readonly) TSUZipFileArchive * componentZipArchive; 
@property (nonatomic,readonly) BOOL isPasswordProtected; 
@property (nonatomic,readonly) NSString * passwordHint; 
@property (nonatomic,readonly) NSData * passwordVerifier; 
+(BOOL)isValidPackageAtURL:(id)arg1 ;
+(id)newPackageWithURL:(id)arg1 packageIdentifier:(unsigned char)arg2 decryptionKey:(id)arg3 fileCoordinatorDelegate:(id)arg4 error:(id*)arg5 ;
+(id)dataEntryPathForFilename:(id)arg1 ;
+(id)zipArchiveURLFromPackageURL:(id)arg1 ;
+(unsigned long long)zipArchiveOptions;
+(BOOL)hasZipArchive;
+(id)newLazyPackageWithURL:(id)arg1 packageIdentifier:(unsigned char)arg2 decryptionKey:(id)arg3 fileCoordinatorDelegate:(id)arg4 ;
+(id)objectArchiveEntryPathForPackageLocator:(id)arg1 ;
-(NSData *)passwordVerifier;
-(void)didRetrieveDecryptionKey:(id)arg1 ;
-(void)didCloseDocument;
-(long long)packageType;
-(unsigned long long)fileFormatVersion;
-(SFUCryptoKey *)decryptionKey;
-(BOOL)containsData:(id)arg1 ;
-(id)dataAtRelativePath:(id)arg1 allowDecryption:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)checkPassword:(id)arg1 ;
-(id)keyFromPassword:(id)arg1 ;
-(void)prepareForDocumentReplacementWithSuccess:(BOOL)arg1 forSafeSave:(BOOL)arg2 originalURL:(id)arg3 ;
-(void)removeAllDataReferences;
-(id)newDataStorageAtRelativePath:(id)arg1 decryptionInfo:(id)arg2 ;
-(void)didReferenceData:(id)arg1 ;
-(id<TSPFileCoordinatorDelegate>)fileCoordinatorDelegate;
-(unsigned long long)encodedLengthForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(BOOL)arg2 ;
-(id)newRawReadChannelForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(BOOL)arg2 ;
-(void)copyComponent:(id)arg1 toPackageURL:(id)arg2 packageLocator:(id)arg3 zipFileWriter:(id)arg4 encryptionKey:(id)arg5 canLink:(BOOL)arg6 completion:(/*^block*/id)arg7 ;
-(TSUZipFileArchive *)zipArchive;
-(id)newRawDataReadChannelAtRelativePath:(id)arg1 ;
-(BOOL)hasDataAtRelativePath:(id)arg1 ;
-(id)newDocumentPropertiesWithURL:(id)arg1 zipProvider:(/*^block*/id)arg2 error:(id*)arg3 ;
-(id)initWithPackageIdentifier:(unsigned char)arg1 documentProperties:(id)arg2 fileFormatVersion:(unsigned long long)arg3 decryptionKey:(id)arg4 fileCoordinatorDelegate:(id)arg5 isLazyLoading:(BOOL)arg6 ;
-(TSUZipFileArchive *)componentZipArchive;
-(NSError *)lastReloadError;
-(id)newReadChannelForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(BOOL)arg2 ;
-(void)didReadFileFormatVersion:(unsigned long long)arg1 ;
-(void)setZipArchive:(TSUZipFileArchive *)arg1 ;
-(BOOL)didReloadZipArchive:(id)arg1 error:(id*)arg2 ;
-(void)peformSynchronousAccessToZipArchive:(/*^block*/id)arg1 ;
-(id)initWithURL:(id)arg1 zipArchiveOrNil:(id)arg2 packageIdentifier:(unsigned char)arg3 documentProperties:(id)arg4 decryptionKey:(id)arg5 fileCoordinatorDelegate:(id)arg6 error:(id*)arg7 ;
-(id)newZipArchiveFromPackageURL:(id)arg1 isLazyLoading:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)reloadZipArchiveIfNeededWithURLImpl:(id)arg1 isLazyLoading:(BOOL)arg2 error:(id*)arg3 ;
-(id)keyFromPassword:(id)arg1 passwordVerifier:(id)arg2 ;
-(id)init;
-(BOOL)isClosed;
-(void)enumerateDatasUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isPasswordProtected;
-(NSString *)passwordHint;
-(TSPDocumentProperties *)documentProperties;
-(unsigned char)packageIdentifier;
@end

