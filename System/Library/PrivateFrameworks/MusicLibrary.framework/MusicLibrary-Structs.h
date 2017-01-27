/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:08 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned seasonNumber : 1;
	unsigned videoQuality : 1;
} SCD_Struct_MI1;

typedef struct {
	unsigned geniusId : 1;
	unsigned audioFormat : 1;
	unsigned discNumber : 1;
	unsigned lyricsChecksum : 1;
	unsigned trackNumber : 1;
	unsigned userRating : 1;
	unsigned excludeFromShuffle : 1;
	unsigned hasVideo : 1;
} SCD_Struct_MI2;

typedef struct {
	unsigned libraryId : 1;
} SCD_Struct_MI3;

typedef struct iPhoneSortKeyBuilder* iPhoneSortKeyBuilderRef;

typedef struct {
	long long field1;
	long long field2;
} SCD_Struct_ML5;

typedef struct {
	unsigned durationInSamples : 1;
	unsigned gaplessEncodingDrainCode : 1;
	unsigned gaplessFrameResyncCode : 1;
	unsigned gaplessHeuristicCode : 1;
	unsigned gaplessHeuristicDelayCode : 1;
	unsigned startTime : 1;
	unsigned stopTime : 1;
	unsigned volumeNormalizationEnergy : 1;
	unsigned beatsPerMinute : 1;
	unsigned bitRate : 1;
	unsigned codecSubType : 1;
	unsigned codecType : 1;
	unsigned dataKind : 1;
	unsigned progressionDirection : 1;
	unsigned relativeVolume : 1;
	unsigned sampleRate : 1;
} SCD_Struct_MI6;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct SearchCriteriaList* SearchCriteriaListRef;

typedef struct {
	void field1;
	unsigned field2;
} SCD_Struct_ML9;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned char field3;
	unsigned char field4;
	unsigned char field5;
	unsigned char( field6;
	/*function pointer*/void* field7;
	= field8;
	SearchCriteriaList field9;
	SCD_Struct_ML9) field10;
} SCD_Struct_ML10;

typedef struct ChapterData* ChapterDataRef;

typedef struct {
	unsigned creationDateTime : 1;
	unsigned lastPlayedDateTime : 1;
	unsigned modificationDateTime : 1;
	unsigned storeId : 1;
	unsigned distinguishedKind : 1;
	unsigned sortType : 1;
	unsigned type : 1;
	unsigned cloudIsCuratorPlaylist : 1;
	unsigned cloudIsSharingDisabled : 1;
	unsigned cloudIsSubscribed : 1;
	unsigned externalVendorPlaylist : 1;
	unsigned hidden : 1;
	unsigned reversedSorting : 1;
} SCD_Struct_MI12;

typedef struct {
	unsigned evaluationOrder : 1;
	unsigned limitKind : 1;
	unsigned limitOrder : 1;
	unsigned limitValue : 1;
	unsigned dynamic : 1;
	unsigned enabledItemsOnly : 1;
	unsigned filtered : 1;
	unsigned genius : 1;
	unsigned limited : 1;
	unsigned reverseLimitOrder : 1;
} SCD_Struct_MI13;

typedef struct {
	unsigned persistentId : 1;
	unsigned storeId : 1;
	unsigned numDiscs : 1;
	unsigned numTracks : 1;
	unsigned userRating : 1;
	unsigned compilation : 1;
} SCD_Struct_MI14;

typedef struct {
	unsigned rentalDuration : 1;
	unsigned rentalPlaybackDuration : 1;
	unsigned rentalPlaybackStartedDateTime : 1;
	unsigned rentalStartedDateTime : 1;
	unsigned audioLanguage : 1;
	unsigned audioTrackId : 1;
	unsigned audioTrackIndex : 1;
	unsigned subtitleLanguage : 1;
	unsigned subtitleTrackIndex : 1;
	unsigned videoQuality : 1;
	unsigned hasAlternateAudio : 1;
	unsigned hasChapterData : 1;
	unsigned hasSubtitles : 1;
	unsigned rental : 1;
} SCD_Struct_MI15;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct _compressed_pair<long long *, std::__1::allocator<long long> > {
	long long __first_;
} compressed_pair<long long *, std::__1::allocator<long long> >;

typedef struct vector<long long, std::__1::allocator<long long> > {
	long long __begin_;
	long long __end_;
	compressed_pair<long long *, std::__1::allocator<long long> > __end_cap_;
} vector<long long, std::__1::allocator<long long> >;

typedef struct _compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > {
	char* __first_;
} compressed_pair<unsigned char *, std::__1::allocator<unsigned char> >;

typedef struct vector<unsigned char, std::__1::allocator<unsigned char> > {
	char* __begin_;
	char* __end_;
	compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > __end_cap_;
} vector<unsigned char, std::__1::allocator<unsigned char> >;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned long>, std::__1::less<unsigned int>, true> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned long>, std::__1::less<unsigned int>, true> >;

typedef struct _tree_end_node<std::__1::__tree_node_base<void *> *> {
	__tree_node_base<void *> __left_;
} tree_end_node<std::__1::__tree_node_base<void *> *>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned long>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __first_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned long>, void *> > >;

typedef struct _tree<std::__1::__value_type<unsigned int, unsigned long>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned long>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned long> > > {
	__tree_node<std::__1::__value_type<unsigned int, unsigned long>, void *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned long>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned long>, std::__1::less<unsigned int>, true> > __pair3_;
} tree<std::__1::__value_type<unsigned int, unsigned long>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned long>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned long> > >;

typedef struct map<unsigned int, unsigned long, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned long> > > {
	tree<std::__1::__value_type<unsigned int, unsigned long>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned long>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned long> > > __tree_;
} map<unsigned int, unsigned long, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned long> > >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, NSString *>, std::__1::hash<long long>, true> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, NSString *>, std::__1::hash<long long>, true> >;

typedef struct _compressed_pair<float, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, NSString *>, std::__1::equal_to<long long>, true> > {
	float __first_;
} compressed_pair<float, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, NSString *>, std::__1::equal_to<long long>, true> >;

typedef struct _hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> {
	__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> __next_;
} hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> > > {
	hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> __first_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> > > {
	__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> __first_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> > __second_;
} compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> > > {
	compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> > >;

typedef struct _hash_table<std::__1::__hash_value_type<long long, NSString *>, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, NSString *>, std::__1::hash<long long>, true>, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, NSString *>, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::__hash_value_type<long long, NSString *> > > {
	unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, NSString *>, std::__1::hash<long long>, true> > __p2_;
	compressed_pair<float, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, NSString *>, std::__1::equal_to<long long>, true> > __p3_;
} hash_table<std::__1::__hash_value_type<long long, NSString *>, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, NSString *>, std::__1::hash<long long>, true>, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, NSString *>, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::__hash_value_type<long long, NSString *> > >;

typedef struct unordered_map<long long, NSString *, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, NSString *> > > {
	hash_table<std::__1::__hash_value_type<long long, NSString *>, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, NSString *>, std::__1::hash<long long>, true>, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, NSString *>, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::__hash_value_type<long long, NSString *> > > __table_;
} unordered_map<long long, NSString *, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, NSString *> > >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<long long, void *> *> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<long long, void *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::hash<long long> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::hash<long long> >;

typedef struct _compressed_pair<float, std::__1::equal_to<long long> > {
	float __first_;
} compressed_pair<float, std::__1::equal_to<long long> >;

typedef struct _hash_node_base<std::__1::__hash_node<long long, void *> *> {
	__hash_node<long long, void *> __next_;
} hash_node_base<std::__1::__hash_node<long long, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *>, std::__1::allocator<std::__1::__hash_node<long long, void *> > > {
	hash_node_base<std::__1::__hash_node<long long, void *> *> __first_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *>, std::__1::allocator<std::__1::__hash_node<long long, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<long long, void *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<long long, void *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<long long, void *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node<long long, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<long long, void *> *> > > {
	__hash_node<long long, void *> __first_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<long long, void *> *> > __second_;
} compressed_pair<std::__1::__hash_node<long long, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<long long, void *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node<long long, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<long long, void *> *> > > {
	compressed_pair<std::__1::__hash_node<long long, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<long long, void *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node<long long, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<long long, void *> *> > >;

typedef struct _hash_table<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> > {
	unique_ptr<std::__1::__hash_node<long long, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<long long, void *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *>, std::__1::allocator<std::__1::__hash_node<long long, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::hash<long long> > __p2_;
	compressed_pair<float, std::__1::equal_to<long long> > __p3_;
} hash_table<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> >;

typedef struct unordered_set<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> > {
	hash_table<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> > __table_;
} unordered_set<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> >;

typedef struct shared_ptr<ML3VirtualTableDataSource> {
	ML3VirtualTableDataSource __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<ML3VirtualTableDataSource>;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct sqlite3_blob* sqlite3_blobRef;

typedef struct sqlite3* sqlite3Ref;

typedef struct {
	unsigned accountId : 1;
	unsigned bookmarkTimeMilliseconds : 1;
	unsigned creationDateTime : 1;
	unsigned drmKey1IdCode : 1;
	unsigned drmKey2IdCode : 1;
	unsigned drmPlatformIdCode : 1;
	unsigned duration : 1;
	unsigned familyAccountId : 1;
	unsigned fileSize : 1;
	unsigned lastPlayedDateTime : 1;
	unsigned lastSkippedDateTime : 1;
	unsigned modificationDateTime : 1;
	unsigned purchaseDateTime : 1;
	unsigned purchaseHistoryId : 1;
	unsigned releaseDateTime : 1;
	unsigned sagaId : 1;
	unsigned storeId : 1;
	unsigned storePlaylistId : 1;
	unsigned storefrontId : 1;
	unsigned subscriptionStoreItemId : 1;
	unsigned cloudStatus : 1;
	unsigned contentRating : 1;
	unsigned contentRatingLevel : 1;
	unsigned drmVersionsCode : 1;
	unsigned fileKind : 1;
	unsigned likedState : 1;
	unsigned mediaType : 1;
	unsigned playCount : 1;
	unsigned playCountDelta : 1;
	unsigned purchaseHistoryToken : 1;
	unsigned skipCount : 1;
	unsigned skipCountDelta : 1;
	unsigned storeProtectionType : 1;
	unsigned year : 1;
	unsigned cloudAssetAvailable : 1;
	unsigned explicitContent : 1;
	unsigned hasLocalAsset : 1;
	unsigned hidden : 1;
	unsigned isInUsersLibrary : 1;
	unsigned likedStateChanged : 1;
	unsigned needsReporting : 1;
	unsigned rememberBookmark : 1;
	unsigned userDisabled : 1;
} SCD_Struct_MI50;

typedef struct {
	int trackAdds;
	int trackUpdates;
	int trackDeletes;
	int playlistAdds;
	int playlistDeletes;
	unsigned totalSize;
} SCD_Struct_ML51;

