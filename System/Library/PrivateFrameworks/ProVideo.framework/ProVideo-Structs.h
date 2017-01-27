/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PVInstructionGraphImageSourceNode;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_PV0;

typedef const struct PVInputHGNodeMap<int>* PVInputHGNodeMap<int>Ref;

typedef const struct HGRef<HGRenderer>* HGRef<HGRenderer>Ref;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PVInstructionGraphNode *>, std::__1::less<unsigned int>, true> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PVInstructionGraphNode *>, std::__1::less<unsigned int>, true> >;

typedef struct _tree_end_node<std::__1::__tree_node_base<void *> *> {
	__tree_node_base<void *> __left_;
} tree_end_node<std::__1::__tree_node_base<void *> *>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, PVInstructionGraphNode *>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __first_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, PVInstructionGraphNode *>, void *> > >;

typedef struct _tree<std::__1::__value_type<unsigned int, PVInstructionGraphNode *>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PVInstructionGraphNode *>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, PVInstructionGraphNode *> > > {
	__tree_node<std::__1::__value_type<unsigned int, PVInstructionGraphNode *>, void *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, PVInstructionGraphNode *>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PVInstructionGraphNode *>, std::__1::less<unsigned int>, true> > __pair3_;
} tree<std::__1::__value_type<unsigned int, PVInstructionGraphNode *>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PVInstructionGraphNode *>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, PVInstructionGraphNode *> > >;

typedef struct map<unsigned int, PVInstructionGraphNode *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, PVInstructionGraphNode *> > > {
	tree<std::__1::__value_type<unsigned int, PVInstructionGraphNode *>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PVInstructionGraphNode *>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, PVInstructionGraphNode *> > > __tree_;
} map<unsigned int, PVInstructionGraphNode *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, PVInstructionGraphNode *> > >;

typedef struct _compressed_pair<unsigned long, LoadableInstructionCompare> {
	unsigned long long __first_;
} compressed_pair<unsigned long, LoadableInstructionCompare>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<HGRef<LoadableInstruction>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __first_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<HGRef<LoadableInstruction>, void *> > >;

typedef struct _tree<HGRef<LoadableInstruction>, LoadableInstructionCompare, std::__1::allocator<HGRef<LoadableInstruction> > > {
	__tree_node<HGRef<LoadableInstruction>, void *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<HGRef<LoadableInstruction>, void *> > > __pair1_;
	compressed_pair<unsigned long, LoadableInstructionCompare> __pair3_;
} tree<HGRef<LoadableInstruction>, LoadableInstructionCompare, std::__1::allocator<HGRef<LoadableInstruction> > >;

typedef struct set<HGRef<LoadableInstruction>, LoadableInstructionCompare, std::__1::allocator<HGRef<LoadableInstruction> > > {
	tree<HGRef<LoadableInstruction>, LoadableInstructionCompare, std::__1::allocator<HGRef<LoadableInstruction> > > __tree_;
} set<HGRef<LoadableInstruction>, LoadableInstructionCompare, std::__1::allocator<HGRef<LoadableInstruction> > >;

typedef struct _tree_const_iterator<HGRef<LoadableInstruction>, std::__1::__tree_node<HGRef<LoadableInstruction>, void *> *, long> {
	__tree_node<HGRef<LoadableInstruction>, void *> __ptr_;
} tree_const_iterator<HGRef<LoadableInstruction>, std::__1::__tree_node<HGRef<LoadableInstruction>, void *> *, long>;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_PV14;

typedef struct HGRef<PVRenderContext> {
	PVRenderContext m_Obj;
} HGRef<PVRenderContext>;

typedef struct _compressed_pair<HGRef<HGBitmap> *, std::__1::allocator<HGRef<HGBitmap> > > {
	HGRef<HGBitmap> __first_;
} compressed_pair<HGRef<HGBitmap> *, std::__1::allocator<HGRef<HGBitmap> > >;

typedef struct vector<HGRef<HGBitmap>, std::__1::allocator<HGRef<HGBitmap> > > {
	HGRef<HGBitmap> __begin_;
	HGRef<HGBitmap> __end_;
	compressed_pair<HGRef<HGBitmap> *, std::__1::allocator<HGRef<HGBitmap> > > __end_cap_;
} vector<HGRef<HGBitmap>, std::__1::allocator<HGRef<HGBitmap> > >;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CachedImageInfo {
	BOOL cached;
	CGSize size;
	BOOL imageExists;
	PVInstructionGraphImageSourceNode* _source;
	HGSynchronizable _lock;
} CachedImageInfo;

typedef struct HGRef<PVRenderManager> {
	PVRenderManager m_Obj;
} HGRef<PVRenderManager>;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct __CVBuffer* CVBufferRef;

typedef struct {
	SCD_Struct_PV14 start;
	SCD_Struct_PV14 duration;
} SCD_Struct_PV24;

typedef struct _NSZone* NSZoneRef;

typedef struct HGRef<HGNode> {
	HGNode m_Obj;
} HGRef<HGNode>;

typedef struct HGRef<HGCVBitmap> {
	HGCVBitmap m_Obj;
} HGRef<HGCVBitmap>;

typedef struct PVImageProperties {
	unsigned cvPixelFormat;
	int bitsPerPixel;
	unsigned alphaInfo;
	CGColorSpace cgColorSpaceRef;
} PVImageProperties;

typedef struct _compressed_pair<HGRef<PVRenderRequestHandler> *, std::__1::allocator<HGRef<PVRenderRequestHandler> > > {
	HGRef<PVRenderRequestHandler> __first_;
} compressed_pair<HGRef<PVRenderRequestHandler> *, std::__1::allocator<HGRef<PVRenderRequestHandler> > >;

typedef struct vector<HGRef<PVRenderRequestHandler>, std::__1::allocator<HGRef<PVRenderRequestHandler> > > {
	HGRef<PVRenderRequestHandler> __begin_;
	HGRef<PVRenderRequestHandler> __end_;
	compressed_pair<HGRef<PVRenderRequestHandler> *, std::__1::allocator<HGRef<PVRenderRequestHandler> > > __end_cap_;
} vector<HGRef<PVRenderRequestHandler>, std::__1::allocator<HGRef<PVRenderRequestHandler> > >;

typedef struct _compressed_pair<int **, std::__1::allocator<int *> > {
	int __first_;
} compressed_pair<int **, std::__1::allocator<int *> >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<int> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::allocator<int> >;

typedef struct _split_buffer<int *, std::__1::allocator<int *> > {
	int __first_;
	int __begin_;
	int __end_;
	compressed_pair<int **, std::__1::allocator<int *> > __end_cap_;
} split_buffer<int *, std::__1::allocator<int *> >;

typedef struct deque<int, std::__1::allocator<int> > {
	split_buffer<int *, std::__1::allocator<int *> > __map_;
	unsigned long long __start_;
	compressed_pair<unsigned long, std::__1::allocator<int> > __size_;
} deque<int, std::__1::allocator<int> >;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct HGRef<HGGLTexture> {
	HGGLTexture m_Obj;
} HGRef<HGGLTexture>;

typedef struct HGRef<HGRenderJob> {
	HGRenderJob m_Obj;
} HGRef<HGRenderJob>;

typedef struct OZXDocumentInfo {
	unsigned _hasVideo;
	unsigned _width;
	unsigned _height;
	unsigned _bitsPerComponent;
	unsigned _components;
	unsigned _frames;
	double _frameRate;
	unsigned _isNTSC;
	double _pixelAspectRatio;
	float _bgColor[3];
	unsigned _fieldOrder;
	unsigned _audioChannels;
	unsigned _audioBytesPerSample;
	double _audioSampleRate;
	unsigned _hasAudio;
	unsigned _unused[16];
} OZXDocumentInfo;

typedef struct FigTime {
	double _t;
} FigTime;

typedef struct METimeRemap {
	FigTime _introDuration;
	FigTime _outroDuration;
	FigTime _scaleableDuration;
	BOOL _isIntroOptional;
	BOOL _isOutroOptional;
	BOOL _isStartTimeAligned;
	BOOL _isEndTimeAligned;
	BOOL _isLoop;
	OZChannelBool _pBuildInEnableChan;
	OZChannelBool _pBuildOutEnableChan;
} METimeRemap;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	unsigned long long field3;
	unsigned long long field4;
	unsigned long long field5;
	unsigned long long field6;
	unsigned long long field7;
	BOOL field8;
	double field9;
} SCD_Struct_Fx42;

typedef struct __CFString* CFStringRef;

typedef struct __CFUUID* CFUUIDRef;

typedef struct opaque_pthread_rwlock_t {
	long long __sig;
	char __opaque[192];
} opaque_pthread_rwlock_t;

typedef struct {
	/*function pointer*/void* field1;
	= field2;
	double field3;
	/*function pointer*/void*) field4;
	unsigned long long field5;
	unsigned long long field6;
	double field7;
	double field8;
	unsigned long long field9;
} SCD_Struct_PA46;

typedef union {
	double frame;
	/*function pointer*/void* seconds;
} SCD_Union_PA47;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct PCMutex {
	/*function pointer*/void* _vptr$PCMutex;
	opaque_pthread_mutex_t _Mutex;
} PCMutex;

typedef struct _compressed_pair<OZChannelBlindData **, std::__1::allocator<OZChannelBlindData *> > {
	OZChannelBlindData __first_;
} compressed_pair<OZChannelBlindData **, std::__1::allocator<OZChannelBlindData *> >;

typedef struct vector<OZChannelBlindData *, std::__1::allocator<OZChannelBlindData *> > {
	OZChannelBlindData __begin_;
	OZChannelBlindData __end_;
	compressed_pair<OZChannelBlindData **, std::__1::allocator<OZChannelBlindData *> > __end_cap_;
} vector<OZChannelBlindData *, std::__1::allocator<OZChannelBlindData *> >;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<_opaque_pthread_t *, std::__1::__value_type<_opaque_pthread_t *, std::__1::stack<OZFxPlugRenderContext *, std::__1::deque<OZFxPlugRenderContext *, std::__1::allocator<OZFxPlugRenderContext *> > > >, std::__1::less<_opaque_pthread_t *>, true> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<_opaque_pthread_t *, std::__1::__value_type<_opaque_pthread_t *, std::__1::stack<OZFxPlugRenderContext *, std::__1::deque<OZFxPlugRenderContext *, std::__1::allocator<OZFxPlugRenderContext *> > > >, std::__1::less<_opaque_pthread_t *>, true> >;

typedef struct PCSpinLock {
	int _lock;
} PCSpinLock;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<_opaque_pthread_t *, std::__1::stack<OZFxPlugRenderContext *, std::__1::deque<OZFxPlugRenderContext *, std::__1::allocator<OZFxPlugRenderContext *> > > >, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __first_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<_opaque_pthread_t *, std::__1::stack<OZFxPlugRenderContext *, std::__1::deque<OZFxPlugRenderContext *, std::__1::allocator<OZFxPlugRenderContext *> > > >, void *> > >;

typedef struct _tree<std::__1::__value_type<_opaque_pthread_t *, std::__1::stack<OZFxPlugRenderContext *, std::__1::deque<OZFxPlugRenderContext *, std::__1::allocator<OZFxPlugRenderContext *> > > >, std::__1::__map_value_compare<_opaque_pthread_t *, std::__1::__value_type<_opaque_pthread_t *, std::__1::stack<OZFxPlugRenderContext *, std::__1::deque<OZFxPlugRenderContext *, std::__1::allocator<OZFxPlugRenderContext *> > > >, std::__1::less<_opaque_pthread_t *>, true>, std::__1::allocator<std::__1::__value_type<_opaque_pthread_t *, std::__1::stack<OZFxPlugRenderContext *, std::__1::deque<OZFxPlugRenderContext *, std::__1::allocator<OZFxPlugRenderContext *> > > > > > {
	__tree_node<std::__1::__value_type<_opaque_pthread_t *, std::__1::stack<OZFxPlugRenderContext *, std::__1::deque<OZFxPlugRenderContext *, std::__1::allocator<OZFxPlugRenderContext *> > > >, void *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<_opaque_pthread_t *, std::__1::stack<OZFxPlugRenderContext *, std::__1::deque<OZFxPlugRenderContext *, std::__1::allocator<OZFxPlugRenderContext *> > > >, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<_opaque_pthread_t *, std::__1::__value_type<_opaque_pthread_t *, std::__1::stack<OZFxPlugRenderContext *, std::__1::deque<OZFxPlugRenderContext *, std::__1::allocator<OZFxPlugRenderContext *> > > >, std::__1::less<_opaque_pthread_t *>, true> > __pair3_;
} tree<std::__1::__value_type<_opaque_pthread_t *, std::__1::stack<OZFxPlugRenderContext *, std::__1::deque<OZFxPlugRenderContext *, std::__1::allocator<OZFxPlugRenderContext *> > > >, std::__1::__map_value_compare<_opaque_pthread_t *, std::__1::__value_type<_opaque_pthread_t *, std::__1::stack<OZFxPlugRenderContext *, std::__1::deque<OZFxPlugRenderContext *, std::__1::allocator<OZFxPlugRenderContext *> > > >, std::__1::less<_opaque_pthread_t *>, true>, std::__1::allocator<std::__1::__value_type<_opaque_pthread_t *, std::__1::stack<OZFxPlugRenderContext *, std::__1::deque<OZFxPlugRenderContext *, std::__1::allocator<OZFxPlugRenderContext *> > > > > >;

typedef struct map<_opaque_pthread_t *, std::__1::stack<OZFxPlugRenderContext *, std::__1::deque<OZFxPlugRenderContext *, std::__1::allocator<OZFxPlugRenderContext *> > >, std::__1::less<_opaque_pthread_t *>, std::__1::allocator<std::__1::pair<_opaque_pthread_t *const, std::__1::stack<OZFxPlugRenderContext *, std::__1::deque<OZFxPlugRenderContext *, std::__1::allocator<OZFxPlugRenderContext *> > > > > > {
	tree<std::__1::__value_type<_opaque_pthread_t *, std::__1::stack<OZFxPlugRenderContext *, std::__1::deque<OZFxPlugRenderContext *, std::__1::allocator<OZFxPlugRenderContext *> > > >, std::__1::__map_value_compare<_opaque_pthread_t *, std::__1::__value_type<_opaque_pthread_t *, std::__1::stack<OZFxPlugRenderContext *, std::__1::deque<OZFxPlugRenderContext *, std::__1::allocator<OZFxPlugRenderContext *> > > >, std::__1::less<_opaque_pthread_t *>, true>, std::__1::allocator<std::__1::__value_type<_opaque_pthread_t *, std::__1::stack<OZFxPlugRenderContext *, std::__1::deque<OZFxPlugRenderContext *, std::__1::allocator<OZFxPlugRenderContext *> > > > > > __tree_;
} map<_opaque_pthread_t *, std::__1::stack<OZFxPlugRenderContext *, std::__1::deque<OZFxPlugRenderContext *, std::__1::allocator<OZFxPlugRenderContext *> > >, std::__1::less<_opaque_pthread_t *>, std::__1::allocator<std::__1::pair<_opaque_pthread_t *const, std::__1::stack<OZFxPlugRenderContext *, std::__1::deque<OZFxPlugRenderContext *, std::__1::allocator<OZFxPlugRenderContext *> > > > > >;

typedef struct PCColorSpaceHandle {
	CGColorSpace _cgColorSpace;
} PCColorSpaceHandle;

typedef struct PCRenderModel {
	int _type;
	PCColorSpaceHandle _workingColorSpace;
	float _blendingGamma;
} PCRenderModel;

typedef struct OZFxPlugRenderContextManager {
	/*function pointer*/void* _vptr$OZFxPlugRenderContextManager;
	PCRenderModel _renderModel;
	map<_opaque_pthread_t *, std::__1::stack<OZFxPlugRenderContext *, std::__1::deque<OZFxPlugRenderContext *, std::__1::allocator<OZFxPlugRenderContext *> > >, std::__1::less<_opaque_pthread_t *>, std::__1::allocator<std::__1::pair<_opaque_pthread_t *const, std::__1::stack<OZFxPlugRenderContext *, std::__1::deque<OZFxPlugRenderContext *, std::__1::allocator<OZFxPlugRenderContext *> > > > > > _contexts;
	PCSpinLock _contextLock;
} OZFxPlugRenderContextManager;

typedef struct PCRecursiveMutex {
	/*function pointer*/void* _vptr$PCMutex;
	opaque_pthread_mutex_t _Mutex;
} PCRecursiveMutex;

