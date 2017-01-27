/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ImageCapture/ImageCapture-Structs.h>
@class NSString, NSDictionary, NSMutableArray;

@interface ICPTPIPBonjourServiceProperties : NSObject {

	CFSocketRef _hostSocket;
	NSString* _hostName;
	unsigned short _hostPort;
	NSString* _hostGUID;
	unsigned _hostMaxConnections;
	int _hostSecuritylevel;
	NSString* _serviceType;
	NSDictionary* _txtRecordsDict;
	CFNetServiceRef _publishedService;
	NSMutableArray* _clients;
	os_unfair_lock_s _clientUnfairLock;
	id _delegate;
	os_unfair_lock_s _clientsUnfairLock;

}

@property (assign) CFSocketRef hostSocket;                          //@synthesize hostSocket=_hostSocket - In the implementation block
@property (retain) NSString * hostName;                             //@synthesize hostName=_hostName - In the implementation block
@property (assign) unsigned short hostPort;                         //@synthesize hostPort=_hostPort - In the implementation block
@property (retain) NSString * hostGUID;                             //@synthesize hostGUID=_hostGUID - In the implementation block
@property (assign) unsigned hostMaxConnections;                     //@synthesize hostMaxConnections=_hostMaxConnections - In the implementation block
@property (assign) int hostSecurityLevel;                           //@synthesize hostSecuritylevel=_hostSecuritylevel - In the implementation block
@property (retain) NSString * serviceType;                          //@synthesize serviceType=_serviceType - In the implementation block
@property (retain) NSDictionary * txtRecordsDict;                   //@synthesize txtRecordsDict=_txtRecordsDict - In the implementation block
@property (assign) CFNetServiceRef publishedService;                //@synthesize publishedService=_publishedService - In the implementation block
@property (retain) NSMutableArray * clients;                        //@synthesize clients=_clients - In the implementation block
@property (assign) os_unfair_lock_s clientsUnfairLock;              //@synthesize clientsUnfairLock=_clientsUnfairLock - In the implementation block
@property (assign) id delegate;                                     //@synthesize delegate=_delegate - In the implementation block
-(NSString *)hostName;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(NSString *)serviceType;
-(void)setServiceType:(NSString *)arg1 ;
-(void)setHostGUID:(NSString *)arg1 ;
-(void)setTxtRecordsDict:(NSDictionary *)arg1 ;
-(void)releaseNetService;
-(void)releaseSocket;
-(CFSocketRef)hostSocket;
-(void)setHostSocket:(CFSocketRef)arg1 ;
-(unsigned short)hostPort;
-(void)setHostPort:(unsigned short)arg1 ;
-(NSString *)hostGUID;
-(unsigned)hostMaxConnections;
-(void)setHostMaxConnections:(unsigned)arg1 ;
-(int)hostSecurityLevel;
-(void)setHostSecurityLevel:(int)arg1 ;
-(NSDictionary *)txtRecordsDict;
-(CFNetServiceRef)publishedService;
-(void)setPublishedService:(CFNetServiceRef)arg1 ;
-(os_unfair_lock_s)clientsUnfairLock;
-(void)setClientsUnfairLock:(os_unfair_lock_s)arg1 ;
-(void)setHostName:(NSString *)arg1 ;
-(NSMutableArray *)clients;
-(void)finalize;
-(void)setClients:(NSMutableArray *)arg1 ;
@end

