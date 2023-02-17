// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is copyable.
        
        #include "REcmaAttributeData.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include "RAttributeDefinitionData.h"
            
            
        // includes for base ecma wrapper classes
        
                  #include "REcmaTextBasedData.h"
                 void REcmaAttributeData::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RAttributeData*) 0)));
        protoCreated = true;
    }

    
        // primary base class RTextBasedData:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<RTextBasedData*>());

            if (dpt.isValid()) {
                proto->setPrototype(dpt);
            }
          
        /*
        
        */
    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    
    // copy:
    REcmaHelper::registerFunction(&engine, proto, copy, "copy");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    
        // conversion for base class RTextBasedData
        REcmaHelper::registerFunction(&engine, proto, getRTextBasedData, "getRTextBasedData");
        
        // conversion for base class REntityData
        REcmaHelper::registerFunction(&engine, proto, getREntityData, "getREntityData");
        
        // conversion for base class RPainterPathSource
        REcmaHelper::registerFunction(&engine, proto, getRPainterPathSource, "getRPainterPathSource");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, getType, "getType");
            
            REcmaHelper::registerFunction(&engine, proto, getRenderedText, "getRenderedText");
            
            REcmaHelper::registerFunction(&engine, proto, getTag, "getTag");
            
            REcmaHelper::registerFunction(&engine, proto, setTag, "setTag");
            
            REcmaHelper::registerFunction(&engine, proto, isInvisible, "isInvisible");
            
            REcmaHelper::registerFunction(&engine, proto, setInvisible, "setInvisible");
            
            REcmaHelper::registerFunction(&engine, proto, getLinetypeId, "getLinetypeId");
            
            REcmaHelper::registerFunction(&engine, proto, getLineweight, "getLineweight");
            
            REcmaHelper::registerFunction(&engine, proto, getColor, "getColor");
            
            REcmaHelper::registerFunction(&engine, proto, getReferencePoints, "getReferencePoints");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RAttributeData*>(), *proto);

        
                engine.setDefaultPrototype(qMetaTypeId<
                RAttributeData
                > (), *proto);
            
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RAttributeData",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaAttributeData::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RAttributeData(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
        
            // generate constructor variants:
            
    if( context->argumentCount() ==
        0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ constructor:
    
            // copyable class:
            RAttributeData
                    cppResult;
                
            result = engine->newVariant(
            context->thisObject(), qVariantFromValue(cppResult));
        
    } else 

    if( context->argumentCount() ==
        3
                && (
                
                        context->argument(
                        0
                        ).isVariant()
                        ||
                    
                        context->argument(
                        0
                        ).isQObject()
                        ||
                    
                        context->argument(
                        0
                        ).isNull()
                ) /* type: RTextBasedData */
            
                && (
                
                        context->argument(
                        1
                        ).isNumber()
                ) /* type: RBlockReferenceEntity::Id */
            
                && (
                
                        context->argument(
                        2
                        ).isString()
                ) /* type: QString */
            
    ){
    // prepare arguments:
    
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RTextBasedData*
                    ap0 =
                    qscriptvalue_cast<
                    RTextBasedData*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if (ap0 == NULL) {
                           return REcmaHelper::throwError("RAttributeData: Argument 0 is not of type RTextBasedData.",
                               context);                    
                    }
                    RTextBasedData 
                    a0 = 
                    *ap0;
                
                    // argument isStandardType
                    RBlockReferenceEntity::Id
                    a1 =
                    (RBlockReferenceEntity::Id)
                    (int)
                    context->argument( 1 ).
                    toNumber();
                
                    // argument isStandardType
                    QString
                    a2 =
                    (QString)
                    
                    context->argument( 2 ).
                    toString();
                
    // end of arguments

    // call C++ constructor:
    
            // copyable class:
            RAttributeData
                    cppResult(
                    a0
        ,
    a1
        ,
    a2
                    );
                
            result = engine->newVariant(
            context->thisObject(), qVariantFromValue(cppResult));
        
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RAttributeData(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaAttributeData::getRTextBasedData(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RTextBasedData* cppResult =
                    qscriptvalue_cast<RAttributeData*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
             QScriptValue REcmaAttributeData::getREntityData(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                REntityData* cppResult =
                    qscriptvalue_cast<RAttributeData*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
             QScriptValue REcmaAttributeData::getRPainterPathSource(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RPainterPathSource* cppResult =
                    qscriptvalue_cast<RAttributeData*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaAttributeData::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RAttributeData"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaAttributeData::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("RTextBasedData");
    
        list.append("REntityData");
    
        list.append("RPainterPathSource");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaAttributeData::getType
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaAttributeData::getType", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaAttributeData::getType";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RAttributeData* self = 
                        getSelf("getType", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'RS::EntityType'
    RS::EntityType cppResult =
        
               self->getType();
        // return type: RS::EntityType
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RAttributeData.getType().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaAttributeData::getType", context, engine);
            return result;
        }
         QScriptValue
        REcmaAttributeData::getRenderedText
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaAttributeData::getRenderedText", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaAttributeData::getRenderedText";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RAttributeData* self = 
                        getSelf("getRenderedText", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'QString'
    QString cppResult =
        
               self->getRenderedText();
        // return type: QString
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isBool()
        ) /* type: bool */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    bool
                    a0 =
                    (bool)
                    
                    context->argument( 0 ).
                    toBool();
                
    // end of arguments

    // call C++ function:
    // return type 'QString'
    QString cppResult =
        
               self->getRenderedText(a0);
        // return type: QString
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RAttributeData.getRenderedText().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaAttributeData::getRenderedText", context, engine);
            return result;
        }
         QScriptValue
        REcmaAttributeData::getTag
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaAttributeData::getTag", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaAttributeData::getTag";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RAttributeData* self = 
                        getSelf("getTag", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'QString'
    QString cppResult =
        
               self->getTag();
        // return type: QString
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RAttributeData.getTag().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaAttributeData::getTag", context, engine);
            return result;
        }
         QScriptValue
        REcmaAttributeData::setTag
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaAttributeData::setTag", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaAttributeData::setTag";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RAttributeData* self = 
                        getSelf("setTag", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isString()
        ) /* type: QString */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setTag(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RAttributeData.setTag().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaAttributeData::setTag", context, engine);
            return result;
        }
         QScriptValue
        REcmaAttributeData::isInvisible
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaAttributeData::isInvisible", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaAttributeData::isInvisible";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RAttributeData* self = 
                        getSelf("isInvisible", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'bool'
    bool cppResult =
        
               self->isInvisible();
        // return type: bool
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RAttributeData.isInvisible().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaAttributeData::isInvisible", context, engine);
            return result;
        }
         QScriptValue
        REcmaAttributeData::setInvisible
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaAttributeData::setInvisible", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaAttributeData::setInvisible";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RAttributeData* self = 
                        getSelf("setInvisible", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isBool()
        ) /* type: bool */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    bool
                    a0 =
                    (bool)
                    
                    context->argument( 0 ).
                    toBool();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setInvisible(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RAttributeData.setInvisible().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaAttributeData::setInvisible", context, engine);
            return result;
        }
         QScriptValue
        REcmaAttributeData::getLinetypeId
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaAttributeData::getLinetypeId", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaAttributeData::getLinetypeId";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RAttributeData* self = 
                        getSelf("getLinetypeId", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'RLinetype::Id'
    RLinetype::Id cppResult =
        
               self->getLinetypeId();
        // return type: RLinetype::Id
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isBool()
        ) /* type: bool */
     && (
            context->argument(1).isVariant() || 
            context->argument(1).isQObject() || 
            context->argument(1).isNull()
        ) /* type: QStack < REntity * > */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    bool
                    a0 =
                    (bool)
                    
                    context->argument( 0 ).
                    toBool();
                
                    // argument is reference
                    QStack < REntity * >*
                    ap1 =
                    qscriptvalue_cast<
                    QStack < REntity * >*
                        >(
                        context->argument(
                        1
                        )
                    );
                    if( ap1 == NULL ){
                           return REcmaHelper::throwError("RAttributeData: Argument 1 is not of type QStack < REntity * >*.",
                               context);                    
                    }
                    QStack < REntity * >& a1 = *ap1;
                
    // end of arguments

    // call C++ function:
    // return type 'RLinetype::Id'
    RLinetype::Id cppResult =
        
               self->getLinetypeId(a0
        ,
    a1);
        // return type: RLinetype::Id
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RAttributeData.getLinetypeId().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaAttributeData::getLinetypeId", context, engine);
            return result;
        }
         QScriptValue
        REcmaAttributeData::getLineweight
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaAttributeData::getLineweight", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaAttributeData::getLineweight";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RAttributeData* self = 
                        getSelf("getLineweight", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'RLineweight::Lineweight'
    RLineweight::Lineweight cppResult =
        
               self->getLineweight();
        // return type: RLineweight::Lineweight
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isBool()
        ) /* type: bool */
     && (
            context->argument(1).isVariant() || 
            context->argument(1).isQObject() || 
            context->argument(1).isNull()
        ) /* type: QStack < REntity * > */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    bool
                    a0 =
                    (bool)
                    
                    context->argument( 0 ).
                    toBool();
                
                    // argument is reference
                    QStack < REntity * >*
                    ap1 =
                    qscriptvalue_cast<
                    QStack < REntity * >*
                        >(
                        context->argument(
                        1
                        )
                    );
                    if( ap1 == NULL ){
                           return REcmaHelper::throwError("RAttributeData: Argument 1 is not of type QStack < REntity * >*.",
                               context);                    
                    }
                    QStack < REntity * >& a1 = *ap1;
                
    // end of arguments

    // call C++ function:
    // return type 'RLineweight::Lineweight'
    RLineweight::Lineweight cppResult =
        
               self->getLineweight(a0
        ,
    a1);
        // return type: RLineweight::Lineweight
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RAttributeData.getLineweight().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaAttributeData::getLineweight", context, engine);
            return result;
        }
         QScriptValue
        REcmaAttributeData::getColor
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaAttributeData::getColor", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaAttributeData::getColor";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RAttributeData* self = 
                        getSelf("getColor", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'RColor'
    RColor cppResult =
        
               self->getColor();
        // return type: RColor
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isBool()
        ) /* type: bool */
     && (
            context->argument(1).isVariant() || 
            context->argument(1).isQObject() || 
            context->argument(1).isNull()
        ) /* type: QStack < REntity * > */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    bool
                    a0 =
                    (bool)
                    
                    context->argument( 0 ).
                    toBool();
                
                    // argument is reference
                    QStack < REntity * >*
                    ap1 =
                    qscriptvalue_cast<
                    QStack < REntity * >*
                        >(
                        context->argument(
                        1
                        )
                    );
                    if( ap1 == NULL ){
                           return REcmaHelper::throwError("RAttributeData: Argument 1 is not of type QStack < REntity * >*.",
                               context);                    
                    }
                    QStack < REntity * >& a1 = *ap1;
                
    // end of arguments

    // call C++ function:
    // return type 'RColor'
    RColor cppResult =
        
               self->getColor(a0
        ,
    a1);
        // return type: RColor
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RAttributeData.getColor().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaAttributeData::getColor", context, engine);
            return result;
        }
         QScriptValue
        REcmaAttributeData::getReferencePoints
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaAttributeData::getReferencePoints", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaAttributeData::getReferencePoints";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RAttributeData* self = 
                        getSelf("getReferencePoints", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isNumber()
        ) /* type: RS::ProjectionRenderingHint */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    RS::ProjectionRenderingHint
                    a0 =
                    (RS::ProjectionRenderingHint)
                    (int)
                    context->argument( 0 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'QList < RRefPoint >'
    QList < RRefPoint > cppResult =
        
               self->getReferencePoints(a0);
        // return type: QList < RRefPoint >
                // List of ...:
                result = REcmaHelper::listToScriptValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RAttributeData.getReferencePoints().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaAttributeData::getReferencePoints", context, engine);
            return result;
        }
         QScriptValue REcmaAttributeData::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RAttributeData* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RAttributeData(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaAttributeData::copy
    (QScriptContext *context, QScriptEngine *engine)
    
    {
        RAttributeData cp = qscriptvalue_cast<RAttributeData>(context->thisObject());
        return qScriptValueFromValue(engine, cp);
    }
     QScriptValue REcmaAttributeData::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RAttributeData* self = getSelf("RAttributeData", context);
        //Q_ASSERT(self!=NULL);
        if (self==NULL) {
            return REcmaHelper::throwError("self is NULL", context);
        }
        
    
        delete self;
        context->thisObject().setData(engine->nullValue());
        context->thisObject().prototype().setData(engine->nullValue());
        context->thisObject().setPrototype(engine->nullValue());
        context->thisObject().setScriptClass(NULL);
        return engine->undefinedValue();
    }
    RAttributeData* REcmaAttributeData::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RAttributeData* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RAttributeData >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RAttributeData.%1(): "
                        "This object is not a RAttributeData").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RAttributeData* REcmaAttributeData::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RAttributeData* selfBase = getSelf(fName, context);
                RAttributeData* self = dynamic_cast<RAttributeData*>(selfBase);
                //return REcmaHelper::scriptValueTo<RAttributeData >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RAttributeData.%1(): "
                    "This object is not a RAttributeData").arg(fName),
                    context);
            }

            return self;
            


        }
        